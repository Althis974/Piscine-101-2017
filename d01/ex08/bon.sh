#!/bin/sh
ldapsearch -LLLx "(cn=*bon*)" cn 2> /dev/null | sed -n 'n;p;n' | wc -l | tr -d " "
