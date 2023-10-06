import copy


hola = [23, [34, 4]]


shallowCopy  = copy.copy(hola)

deepCopy = copy.deepcopy(hola)


if id(shallowCopy) == id(deepCopy):
    print ('deberia ser diferente la direccion de memoria')
else:
    print ('muy bien con el deep copy')

print ('\n' * 2 + 'copia' , id(deepCopy))
print ('copia' , id(shallowCopy))

