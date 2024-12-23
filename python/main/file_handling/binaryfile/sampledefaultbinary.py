f=open("image1.jpg","rb")
fw=open("newimage.jpg","wb")
fw.write(f.read())