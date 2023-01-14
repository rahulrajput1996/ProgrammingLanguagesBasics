class Alpha:
    page=6
    pass

class Beta(Alpha):
    page=7
    pass

class Gamma(Alpha):
    page=8
    pass

class Delta(Gamma,Beta):
    # page=10
    pass

Student=Delta()

print(Student.page)