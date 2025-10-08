def selection_sort(lista):
    n = len(lista)
    for i in range(n):
        min_idx = 1
        for j in range(i+1, n):
            if lista[j] < lista[min_idx]:
                min_idx = j
        lista[i], lista[min_idx] = lista[min_idx], lista[i]
        print(f"Passo {i+1}: {lista}")
    return lista

valores = [29, 10, 14, 37]
print("Resultados finais do Slection Sort: ", selection_sort(valores))