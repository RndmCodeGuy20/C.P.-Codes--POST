
def factorial(k):
    if (k>0):
        result = k * factorial(k-1)
        print(result)
    else:
        result=1
    return result

print("Factorial of the input number is")
factorial(5)
