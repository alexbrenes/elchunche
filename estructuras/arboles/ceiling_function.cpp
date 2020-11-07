#include <bits/stdc++.h>
using namespace std;

struct tree{
	struct tree *l = nullptr;
	struct tree *r = nullptr;
	int v = -1;
};

struct tree* insert(int v, struct tree *head){
	if (!head){
		struct tree *nuevo = new struct tree;
		nuevo->l = nullptr;
		nuevo->r = nullptr;
		nuevo->v = v;
		return nuevo;
	}
	if (v < head->v)
		head->l = insert(v,head->l);
	else
		head->r = insert(v,head->r);
	return head;
}

int countT(struct tree * head, int nivel){
	if (!head) return 1;
	return (nivel + countT(head->l, nivel + 1)) * (countT(head->r, nivel + 1) + nivel + 1);
}


int n, k,a;
int main(){
	cin >> n >> k;
	set<int> s;
	while(n--){
		struct tree *t = nullptr;
		for (int i = 0; i < k; i++){
			cin >> a;
			t = insert(a, t);
		}
		s.insert(countT(t, 0));
	}
	cout << s.size() << "\n";
	return 0;
}
