. /var/www/html/lib/.bashrc
cd lib/fbxpy/
python PythonBindings.py Python2_ucs4_x64 buildsip
cp -r /var/www/html/lib/fbxpy/build/Distrib/site-packages/fbx/* /usr/local/lib/python2.7/dist-packages/
#Update /var/www/html/lib/fbxpy/build/Python27_ucs4_x64/Makefile (move -lz -lxml2 to end of LIBS line and import lxml2 in CPPFLAGS: -I/usr/include/libxml2)
cp fixed_Makefile build/Python27_ucs4_x64/Makefile
rm -rf build/Python27_ucs4_x64/fbx.so
cd build/Python27_ucs4_x64/ && make && cd ../../
cp build/Python27_ucs4_x64/fbx.so /usr/local/lib/python2.7/dist-packages/
cd /var/www/html/