# l=["hello",'\ni\'m vikas',"\nTHis is more content"]

d={"1":"hello","2":"\nWorld"}

f=open('sample1.txt','w')

f.writelines(d) #this is to insert string

#this is for list 

# f.writelines(l) 
f.close()