tar -xvf lib/sip-4.19.3.tar.gz -C lib/
cd lib/sip-4.19.3/
python configure.py
make
make install
cd /var/www/html/