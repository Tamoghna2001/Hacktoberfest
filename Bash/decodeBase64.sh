i=0
while IFS="" read -r line || [ -n "$line" ]
do
    i=$(( i+1 ))
    echo $line | base64 -d - > output_$i
done