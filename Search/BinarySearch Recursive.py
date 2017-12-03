
def BinarySearch(array, data,lower,higher):
    middle = int ((higher + lower) / 2)
    if lower == higher:
        return middle if array[middle] == data else -1 
    else:
        if array[middle] == data: 
            return middle 
        else: 
            if array[middle] > data: 
                return BinarySearch(array, data, lower, middle)
            else: 
                return BinarySearch(array, data, middle + 1, higher)
def main():
    print("Exercise of BINARY SEARCH: ")
    print(" ")
    print("Enter the string of numbers separated by commas:")
    string = input()
    print("Enter the item to search:")
    x = input()
    A = string.split(",")
    print(" ")
    lowerBound =0
    upperBound = len(A)-1
    print("The index of the element to look for is:")
    print(BinarySearch(A,x,lowerBound,upperBound)

main()
