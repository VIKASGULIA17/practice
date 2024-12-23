with open("image1.jpg",'rb') as f:
    with open("image2.jpg","wb") as wf:
        wf.write(f.read())