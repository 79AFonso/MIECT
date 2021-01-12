#Exercicio 1.1
def comprimento(lista):
	if lista == []:
		return 0

	return 1 + comprimento(lista[1:])

print(comprimento([1,2,3,4,5]))

#Exercicio 1.2
def soma(lista):
	if lista == []:
		return 0

	return lista[0] + soma(lista[1:])


print(soma([1,3,5,7]))


#Exercicio 1.3
def existe(lista, elem):
	if lista == []:
		return False

	if elem == lista[0] : 
		return True

	else :
		return existe(lista[1:], elem)

print(existe([1,2,3], 4))

#Exercicio 1.4
def concat(l1, l2):
	if l1 == []:
		return l2
	if l2 == []:
		return l1

	l1.append(l2[0])
	return concat(l1,l2[1:])

print(concat([1,2,3], [4,5,6]))

#Exercicio 1.5
def inverte(lista):

	if lista == []:
		return []

	return inverte(lista[1:])+[lista[0]]

print(inverte([1,2,3]))

#Exercicio 1.6
def capicua(lista):
	if lista == []:
		return True

	return lista[0] == lista[-1] and capicua(lista[1:-1])

print(capicua([1,2,3,2,1]))

#Exercicio 1.7
def explode(lista):
	if lista == []:
		return []

	return concat(lista[0], explode(lista[1:]))


#Exercicio 1.8
def substitui(lista, original, novo):
	if lista == []:
		return []

	if lista[0] == original:
		return [novo] + substitui(lista[1:], original, novo)

	return [lista[0]] + substitui(lista[1:], original, novo)


#Exercicio 1.9
def junta_ordenado(lista1, lista2):
	if lista1 == []:
		return lista2

	if lista2 == []:
		return lista1

	if lista1[0] < lista2[0]:
		return [lista1[0]] + junta_ordenado(lista1[1:], lista2)

	return [lista2[0]] + junta_ordenado(lista1, lista2[1:])


#Exercicio 2.1
def separar(lista):
	if lista == []:
		return [], []

	a, b = lista[0]
	l1, l2 = separar(lista[1:])

	return [a] + l1, [b] + l2

#Exercicio 2.2
def remove_e_conta(lista, elem):
# 	if lista == []:
# 		return []

# 	if lista[0] != elem:
# 		print("oi")
# 		return [lista[0]] + remove_e_conta(lista[1:], elem)
	
# 	else:
# 		print("debug")
# 		remove_e_conta(lista[1:], elem)

# print(remove_e_conta([1,2,3], 3))

	pass

#Exercicio 3.1
def cabeca(lista):
	pass

#Exercicio 3.2
def cauda(lista):
	pass

#Exercicio 3.3
def juntar(l1, l2):

	if len(l1) != len(l2):
		return None

	if l1 == []:
		return []
	
	return [(l1[0], l2[0])] + juntar(l1[1:], l2[1:])

#Exercicio 3.4

def menor(lista):
	if lista==[]:
		return None
	
	m = menor(lista[1:])

	if not m is None and m < lista[0]:
		return m
	else:
		return lista[0]

#Exercicio 3.6
def max_min(lista):
	pass
