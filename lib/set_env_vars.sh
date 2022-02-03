echo "export PATH=/usr/local/USD/bin:/var/www/html/lib/usdzconvert:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin" >> /var/www/html/lib/.bashrc
echo "export PYTHONPATH=/usr/local/lib/python2.7/dist-packages:/usr/local/USD/lib/python" >> /var/www/html/lib/.bashrc
echo "export LD_LIBRARY_PATH=/var/www/html/lib/fbxsdk/lib/gcc/x64/release" >> /var/www/html/lib/.bashrc
echo "export SIP_ROOT=/var/www/html/lib/sip-4.19.3" >> /var/www/html/lib/.bashrc
echo "export FBXSDK_ROOT=/var/www/html/lib/fbxsdk" >> /var/www/html/lib/.bashrc
echo "export QUOTING_STYLE=literal" >> /var/www/html/lib/.bashrc
. /var/www/html/lib/.bashrc