class Library:
    
    def __init__(self,bookslist,libname):
        self.listBooks=bookslist
        self.libraryName=libname
        self.mylendreturnDict={}
    
    def displaybooks(self):
        mybooks=self.listBooks
        i=1
        for element in mybooks:
            print(f"{i}.{element}")
            i=i+1
    
    def lendbook(self,user,book):
        if book in self.listBooks:
            # print(self.mylendreturnDict.keys())
            if book not in self.mylendreturnDict.keys():
                self.mylendreturnDict[book]=user
                print("book is lended successfully! Enjoy your day")
            else:
                print(f"book is already lended to {self.mylendreturnDict[book]} ! Enjoy your day")

        elif book not in self.listBooks:
            print("book is not available in the library! Enjoy your day")
            
        
    def addbook(self,book):
        self.listBooks.append(book)

    def returnbook(self,book):
        if book in self.listBooks:
            if book in self.mylendreturnDict.keys():
                del self.mylendreturnDict[book]
                print("book is returned successfully! Enjoy your day")
            else:
                print(f"book is already available in library. How u can return!")
              
        elif book not in self.listBooks:
            print("book was not available in the library. You can not return. Enjoy your day")


bookslist=["c++","python","java","javaScript","Wordpress","c","HTML/CSS","Jquery & react"]
rahul=Library(bookslist,"RahulLibrary")

if __name__=="__main__":
    while(True):
        myinput=int(input("What do you want to do? press 1 for display all books, press 2 for lend book ,press 3 for add book, press 4 for return book, press 5 for quit: "))
        if myinput==1:
            rahul.displaybooks()
        elif myinput==2:
            book=input("enter book name which u want to lend from library: ")
            user=input("enter your name: ")
            rahul.lendbook(user,book)
        elif myinput==3:
            book=input("enter book name which u want to add in library: ")
            rahul.addbook(book)
            print("book is added successfully! Enjoy your day")

        elif myinput==4:
            book=input("enter book name which u want to return: ")
            rahul.returnbook(book)
        elif myinput==5:
            break
        else:
            print("wrong input ..Please try again")

