#oh soldier pretty my folder
import os

def soldier(path,file,format):
    os.chdir(path)
    # print(os.getcwd())
    with open (file,"r") as myfile:
        myfiledata=myfile.read()
        # print(myfiledata)
        mycontent=myfiledata.split("\n")
        # print(mycontent)

    with open (file,"r+") as myfile:
        i=1
        for element in mycontent:
            mynewelement=element.capitalize()
            myfile.write(mynewelement)
            if i!=len(mycontent):
                myfile.write("\n")
            i=i+1

    mydirectoryfiles=os.listdir()
    i=1
    for element in mydirectoryfiles:
        if element.endswith(format):
            os.rename(element,f"{i}.{format}")
            i=i+1
        else:
            os.rename(element,element.capitalize())

soldier(r"E:\2.MyPrograms\8.python\ohSoldierPrettyMyFolder","rahul.txt","png")