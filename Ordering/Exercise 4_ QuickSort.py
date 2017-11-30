__author__ = "Harold Pedraza"

def quick_sort(numeros):
    i = 1
    if len(numeros) == i or len(numeros) == 0: #The array is already ordered
        return numeros
    else:
        pivot = numeros[0] #I keep it in the pivot since it is the first position

        for u in range(len(numeros)-1,-1,-1):
            if pivot == numeros[u]:
                del numeros[u] #eliminated the element that is equal to the pivot to go through the list

        less =[]
        greater = [] #he declared them as lists

        for x in range(len(numeros)): #Organized the numbers
            if numeros[x] < pivot:
                less.append(numeros[x])
            else:
                greater.append(numeros[x])

        return quick_sort(less), pivot, quick_sort(greater) #return the obtained values 

def main():
    print("Exercise of QUICK SORT: ")
    print(" ")
    print("Enter the string of numbers separated by commas: ")
    cadena = input()
    numeros = int()
    numeros = cadena.split(",")
    print(" ")
    print(" ")
    print("The organized numbers are :")

    print (quick_sort(numeros))
main()