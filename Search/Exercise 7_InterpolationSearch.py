__author__ = "Harold Pedraza"

def InterpolationSearch(A, x):
    lowerBound = 0
    upperBound = int(len(A) - 1)
    index = -1

    while lowerBound < upperBound: 
        middlepoint = middlepoint = lowerBound + ((upperBound - lowerBound) // (int(A[upperBound])- int(A[lowerBound]))) * (int(x)-int(A[lowerBound]))

        if x == A[middlepoint]: #if the element is equal to the middle point of the list
            index = middlepoint
            break
        else:
            if x < A[middlepoint]:
                upperBound = middlepoint -1
            else:
                lowerBound = middlepoint + 1

    if lowerBound == upperBound and A[lowerBound] == x:
        index = lowerBound
    return index

def main():
    print("Exercise of INTERPOLATION SEARCH: ")
    print(" ")
    A = int()
    x = int()
    print("Enter the string of numbers separated by commas: ")
    cadena = input()
    print("Enter the item to search: ")
    x = input()
    A = cadena.split(",")
    
    print(" ")
    print("The index of the item to look for is: ")
    print(InterpolationSearch(A,x))
main()
