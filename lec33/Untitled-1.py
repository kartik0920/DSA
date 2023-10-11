def func(concept,target):
    for i, val in enumerate(target):
        if val=="Yes":
            specific_hypothesis=concept[i].copy()
            print(specific_hypothesis)
            break
    count=0
    for i, val in enumerate(concept):
        count=count+1
        print("concept=",concept[i])
        print("count=",count)
        if target[i]=="Yes":
            print("target[i]=",target[i])
    #print(len(specific_hypothesis))
    for x in range (len(specific_hypothesis)):
        print("x=",x)
        if val[x]!=specific_hypothesis[x]:
    #print("val[x]=",val[x])
        specific_hypothesis[x]='?'
        print("specific_hypothesis[x]=",specific_hypothesis)
    else:
        pass
    print(specific_hypothesis)