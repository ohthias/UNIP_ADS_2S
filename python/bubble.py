def bubble_sort(lista):
    n = 4
    for i in range(n):
        print(f"Passo {i+1}: {lista}")
        for j in range(0, n-i-1):
            if lista[j] > lista[j+1]:
                lista[j], lista[j+1] = lista[j+1], lista[j]
    return lista

valores = [4,2,3,1]
print("Resultado final Bubble Sort:", bubble_sort(valores))