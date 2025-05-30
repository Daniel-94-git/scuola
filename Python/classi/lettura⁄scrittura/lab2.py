


with open('prova2.txt','w') as file:
    file.write("Ciao!!")
    
with open('prova2.txt','a') as file:
    file.write("seconda riga")
    
with open('prova2.txt','r') as file:
    file.read()