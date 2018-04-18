ldapsearch -QLLL "uid=z*" cn | grep "cn:" | cut -d : -f2 | sed '/^$/d' | cut -c 2- | sort -rf
