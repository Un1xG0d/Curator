FROM php:8.0-apache
WORKDIR /var/www/html
COPY curator.sh .
COPY index.php .
COPY styles.css .
COPY img/ img/
COPY lib/ lib/
COPY models/ models/
RUN mkdir tmp/
RUN chmod 775 tmp/
RUN apt update -y
RUN apt install -y build-essential cmake curl freeglut3-dev git libglew-dev libglu1-mesa-dev libffi-dev libssl-dev libxml2-dev libxslt-dev mesa-common-dev openssl python2 python-dev zlib1g-dev
RUN curl https://bootstrap.pypa.io/pip/2.7/get-pip.py --output /var/www/html/lib/get-pip.py
RUN python /var/www/html/lib/get-pip.py
RUN pip install jinja2 numpy PySide2 PyOpenGL shiboken2 setuptools
RUN bash lib/install_sip.sh
RUN bash lib/set_env_vars.sh
RUN bash lib/install_bindings.sh
RUN git clone https://github.com/PixarAnimationStudios/USD lib/USD-master/
RUN cd lib/USD-master && git checkout tags/v20.08 && cd ../../
RUN python lib/USD-master/build_scripts/build_usd.py /usr/local/USD/
CMD sed -i "s/80/$PORT/g" /etc/apache2/sites-available/000-default.conf /etc/apache2/ports.conf && docker-php-entrypoint apache2-foreground