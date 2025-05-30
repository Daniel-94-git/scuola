

with open('Nuovo_file','w') as file:
    file.write("Sono appena stato creato\n")
    
with open('Nuovo_file','a') as file:
    file.write("Sono stato aggiunto in seguito\n")
    
with open('Nuovo_file','r') as file:
    leggo = file.read()
    print(leggo)