# updated mergesort


def merge(li, i, mid, j):
    a = []
    p = i
    q = mid + 1
    inversion = 0

    while p <= mid and q <= j:
        if li[p] <= li[q]:
            a.append(li[p])
            p += 1
        else:
            a.append(li[q])
            inversion += (mid - p + 1)
            q += 1

    while p <= mid:
        a.append(li[p])
        p += 1
    while q <= j:
        a.append(li[q])
        q += 1

    for k in range(len(a)):
        li[i + k] = a[k]

    return inversion

def mergesort(li,i,j):
    if i==j:
        return 0
    else:
        mid=(i+j)//2
        x=mergesort(li,i,mid)
        y=mergesort(li,mid+1,j)
        z=merge(li,i,mid,j)
        return (x+y+z)

li=[5,3,2,4,1]
inversion_count=mergesort(li,0,4)
print(inversion_count)