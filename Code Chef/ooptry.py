class emp:
    inc=1.5
    def __init__(self, name , id ,salary) -> None:
        self.fname=name
        self.cid=id
        self.osalary=salary
    def ince(self):
        self.osalary=self.osalary*self.inc
    
    @classmethod
    def change_inc(cls,amt):
        cls.inc=amt

    @staticmethod
    def is_open(day):
        if day=="sunday":
            return True
        else:
            return False

    def __repr__(self) -> str:
        return "Employee({},{},{})".format(self.fname,self.cid, self.osalary)
    def __str__(self) -> str:
        return self.fname
dhruv=emp("Dhruv", 12140580,100000) 
Javad=emp("Javad", 12140720,100000) 
print(repr(dhruv))
# print(emp.is_open("sunday"))
# # print(dhruv.__dict__)
# # dhruv.ince()
# # Javad.ince()
# print(dhruv.osalary)
# print(Javad.osalary)
# # dhruv.inc=2
# # dhruv.ince()
# # Javad.ince()
# emp.change_inc(2)
# dhruv.ince()
# print(dhruv.osalary)
# print(Javad.osalary)
# class programer(emp):
#     def __init__(self, name, id, salary,lang,exp) -> None:
#         super().__init__(name, id, salary)
#         self.lang=lang
#         self.exp=exp


# dhruv=programer("Dhruv", 12140580,100000,"Py","1 year") 
# print(dhruv.fname)
# print(dhruv.lang)
# # print(help(programer))