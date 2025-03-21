# Magic Methods = Dunder methods (double underscore) __init__ , __str__, __eq__
#                 They are automatically called by many Python's built-in operations
#                 They they allow developers to define(__init__) or customize(__str__, __eq__) theri behaviours 

class Book:
    def __init__(self,title,author,pages):
        self.title = title 
        self.author = author
        self.pages = pages
    
    # def selfy():      # Arguments is neccesssary ... because u have created a contructor so the defaualt construtor might be dead 
    def selfy(self):
        print(self)     # <__main__.Book object at 0x000002A1AB367110>


# Earlier self used to return the memory address of teh object 
# but now we modified/customized it to what it should return 

    def __str__(self):      
        return f" '{self.title}' by {self.author}"

    def __eq__(self,other):     # equal
    
    # return boolean
        return self.title == other.title and self.author == other.author

    def __lt__(self,other):     # less than
    
    # return boolean 
        return self.pages < other.pages
    
    def __gt__(self,other):     # less than
    
    # return boolean 
        return self.pages > other.pages

    def __add__(self,other):
        return f"{self.pages + other.pages} pages"
    
# self --> OBJECT
# keyword --> attribute or the variable or the text     # not neccessary be keyword ... could be anything 
    def __contains__(self,keyword):
    # returns boolean 
        return keyword in self.title or keyword in self.author

    def __getitem__(self,key):
        if key == 'title':
            return self.title
        elif key == "author":
            return self.author
        elif key == "pages":
            return self.pages
        else:
            return f"Key '{key}' not found "

book1  = Book("The Hoobiit", "JRR TOILKEN", 293)
book2  = Book("Harry Potter", "JK Rowling", 310)
book3  = Book("Bhagwat Gita ", "Krishna", 9669)
book4  = Book("The Hoobiit", "JRR TOILKEN", 9669)

print(book1.author)     # JRR TOILKEN


# # Before   def __str__
# book1.selfy()       # <__main__.Book object at 0x000002A1AB367110>

print(book1)        # <__main__.Book object at 0x000001A9D5076F90>

# After   def __str__
book1.selfy()      # 'The Hoobiit' by JRR TOILKEN

print(book1)        # 'The Hoobiit' by JRR TOILKEN

# ------------------------------------------------------

# Before    def __eq__
print(book1 == book2)       # False

# After     def __eq__
print(book1 == book4)       # True

# ------------------------------------------------------

# Before    def __lt__
print(book1 < book2)        # False

# After     def __lt__
print(book1 < book2)        # True

# ------------------------------------------------------

# Before    def __gt__
print(book1 < book2)        # False

# After     def __gt__
print(book1 < book3)        # True

# ------------------------------------------------------

# Before    def __add__
print(book1 + book2)        # Typepoerror

# After     def __add__
print(book1 < book3)        # 603 pages

# ------------------------------------------------------

# Before    def __contains__
print("Harry" in book2)        # Typepoerror : Book is not iterable

# After     def __contains__
print("Harry" in book2)        # True
print("Harry" in book1)        # False

# ------------------------------------------------------

# Before    def __getitem__
print(book2['title'])        # Typepoerror : Book object is not subscriptable

# After     def __getitem__
print(book2['title'])         # Harry Potter


# until adjustments are being made
print(book2['author'])         # None
# after adjustments made 
print(book2['author'])         # JK Rowling


print(book2['pages'])         # 323
print(book2['audio'])         # Key 'audio' not found



