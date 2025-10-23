# Graph edges: (u, v, weight)
parent={}
rank={}
edges = [
    ('A', 'B', 4),
    ('A', 'C', 3),
    ('B', 'C', 1),
    ('B', 'D', 2),
    ('C', 'D', 4),
    ('D', 'E', 2),
    ('E', 'F', 6)
]
vertices = ['A', 'B', 'C', 'D', 'E', 'F']

def make_set(v):
    parent[v]=v  #initially parent of a vertices will be itself
    rank[v]=0 #rank of each vertices will be itself
    
    
def find(v):
    if parent[v]!=v:
        parent[v]=find(parent[v])
    return parent[v]
    
def union(u,v):
    x=find(u)
    y=find(v)
    
    if x!=y:
        if rank[x]<rank[y]:
            parent[x]=y
        elif rank[x]>rank[y]:
            parent[y]=x
        else:
            parent[y]=x
            rank[x]=rank[x]+1
        
def kruskals(vertices,edges):
    for v in vertices:
        make_set(v)  #initalize parent and rank
    edges.sort(key=lambda x: x[2])
    mst=[]
    for u,v,w in edges:
        if find(u)!=find(v):
            union(u,v)
            mst.append((u,v,w))
    
    return mst
    
mst=kruskals(vertices,edges)

print("Edges in Minimum Spanning Tree:")
total_cost = 0
for u, v, w in mst:
    print(f"{u} - {v} : {w}")
    total_cost += w

print("Total cost of MST =", total_cost)
