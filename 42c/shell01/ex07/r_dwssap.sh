#!/bin/sh

#export FT_LINE1=7
#export FT_LINE2=15


cat -e /etc/passwd |\

 grep -v '\#' |\
 
  awk 'NR % 2 == 0' |\
  
   cut -d: -f1 |\
   
    rev |\
    
     sort -r |\
     
     sed -n "$FT_LINE1,$FT_LINE2 p" |\
     
      paste -s -d "," |\
      
       sed 's/,/, /g' |\
       
          tr '\n' '.'