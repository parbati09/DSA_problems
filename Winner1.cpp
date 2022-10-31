def winner(self,arr,n):

        arr.sort()

        l = []

        d = {}

        l1 = []

        s1 = ""

        for i in arr:

            if i not in d:

                d[i] = 1 

            else:

                d[i]+=1 

        for i in d:

            l.append(d[i])

        m = max(l)

        for i in d:

            if d[i] == m:

                l1.append((i,d[i]))

       

        l1.sort()

        m = l1[0]

        return m

