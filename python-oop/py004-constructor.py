class Calculator:
    """Do addition, subtraction, multiplication and division."""

    def __init__(self, x, y):
        self.a = x
        self.b = y

    def addition(self):
        return self.a + self.b

    def subtraction(self):
        return self.a - self.b

    def multiplication(self):
        return self.a * self.b

    def division(self):
        try:
            return self.a / self.b
        except ZeroDivisionError:
            return 'It is impossible to divide by zero.'

my_calculator = Calculator(45, 3)

temp = my_calculator.addition()
print(temp)

temp = my_calculator.subtraction()
print(temp)

temp = my_calculator.multiplication()
print(temp)

temp = my_calculator.division()
print(temp)
