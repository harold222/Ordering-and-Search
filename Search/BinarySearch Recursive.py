
def BinarySearch(array, data,lower,higher):
    #Se define la mitad del segmento sobre el cual se esta evaluando
    middle = int ((higher + lower) / 2)
    if lower == higher: #Si la cota superior e inferior son la misma, ya no se puede dividir mas el vector
        return middle if array[middle] == data else -1 #Si el valor no es el mismo que el unico que queda, es porque el valor no esta presente en el vector
    else:
        if array[middle] == data: #Se valida si el valor a buscar se encuentra en la mitad del segmento
            return middle #Si es asi, se retorna ese indice y ya no es necesario buscar
        else: #Si no es el valor, hay que realizar una nueva division del vector cambiando los puntos superior e inferior para hacer la busqueda
            if array[middle] > data: #Si el valor es menor que el almacenado en la mitad del segmento, se trabaja con esa mitad en la siguiente iteracion
                return BinarySearch(array, data, lower, middle)
            else: #Si el valor es mayor que el almacenado en la mitad del segmento, se trabaja con esa mitad en la siguiente iteracion
                return BinarySearch(array, data, middle + 1, higher)
def main():
    print("Ejercisio a basado en BINARY SEARCH: ")
    print(" ")
    print("Ingrese la cadena de numeros separados por comas: ")
    cadena = input()
    print("Ingrese el elemento a buscar: ")
    x = input()
    A = cadena.split(",")
    print(" ")
    lowerBound =0
    upperBound = len(A)-1
    print("El indice del elemento a buscar es: ")
    print(BinarySearch(A,x,lowerBound,upperBound))#paso las variables a el metodo

main()