void make_set{
    for(int i = 1  ; i <= n ;i ++){
        parent[i]=i;
    }
}

void find(){
    if(v==parent[v]){
    return v;
    }
    return parent[v] = find(parent[v]);
}

void union(a,b){
    a = find(a);
    b = find(b);
    if(a!=b){
        parent[b]=a;
    }
}
