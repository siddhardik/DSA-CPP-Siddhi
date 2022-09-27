#include<queue>

queue<int> rev(queue<int> q)
{
    // Base Condition
    if(q.size()==1){
        return q;
    }
    
    int element=q.front();
    q.pop();
    rev(q).push(element);
    return q;
}