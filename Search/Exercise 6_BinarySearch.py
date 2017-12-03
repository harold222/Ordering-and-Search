__author__= "Harold Pedraza"
def BinarySearch(A, x):
    lowerBound =0
    upperBound = len(A)-1
    index = -1
    while lowerBound < upperBound: #If the upper limit is lower than the lower limit, there is no viable solution
        middlepoint = int ((lowerBound + upperBound)) // 2 
        if x == A[middlepoint]: #if the element is equal to the middle point of the list
            index = middlepoint
            break
        else:
            if x < A[middlepoint]:
                upperBound = middlepoint - 1 #it is decreasing
            else:
                lowerBound = middlepoint + 1
    if lowerBound == upperBound and A[middlepoint] == x:
        index = lowerBound
    return index

def main():
    print("Exercise of BINARY SEARCH: ")
    print(" ")
    print("Enter the string of numbers separated by commas: ")
    string = input()
    print("Enter the item to search: ")
    x = input()
    A = string.split(",")
    print(" ")
    print("The index of the element to look for is: ")
    print(BinarySearch(A,x)) 
main()
