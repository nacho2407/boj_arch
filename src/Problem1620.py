nm = list(map(int, input().split()))

pokemonName = dict()
pokemonNo = dict()
for i in range(1, nm[0] + 1):
    pokemonName[i] = input()
    pokemonNo[pokemonName[i]] = i

prob = list()
for i in range(nm[1]) :
    prob.append(input())

for i in range(nm[1]) :
    if prob[i].isdigit() :
        print(pokemonName[int(prob[i])])
    else :
        print(pokemonNo[prob[i]])
