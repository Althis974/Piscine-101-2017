#!/bin/sh

cat contacts_hard.txt | grep -i nicolas | grep -i bauer | grep E | grep \( | tr '\t' ',' | cut -d , -f4
