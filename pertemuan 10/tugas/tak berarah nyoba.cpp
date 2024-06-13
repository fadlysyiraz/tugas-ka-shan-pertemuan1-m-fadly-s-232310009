#include <iostream>
#include <vector>
using namespace std;

class graf{
	private:
		int jumlahsimpul;
		vector<vector<int> > matriksketetanggaan;
		
	public:
		graf(int simpul){
			jumlahsimpul=simpul;
			for (int i=0;i<simpul;i++){
			vector<int> baris(simpul,0);
			matriksketetanggaan.push_back(baris);
		}
		}
	void tambahsisi(int u, int v){
	if(u>=0 && u<jumlahsimpul&& v>=0 && v< jumlahsimpul){
	matriksketetanggaan[u][v]=1;	
	matriksketetanggaan[v][u]=1;
	}else
	cout<<"Sisi tidak valid!"<<endl;
}
	void hapussisi(int u,int v){
	if(u>=0 && u<jumlahsimpul && v>=0 && v<jumlahsimpul){
	matriksketetanggaan[u][v]=0;
	matriksketetanggaan[v][u]=0;
	}else{cout<<"Sisi tidak valid!";
	}
}

	void tampilkan(){
	for(int i=0;i<jumlahsimpul;i++){
		cout << "Vertex " << i << " : ";
		for(int j=0;j<jumlahsimpul;j++){
			if(matriksketetanggaan[i][j] == 1){
                    cout << " -> " << j;
                }
		}
		cout<<endl;
	}
}
};

int main(){
	int simpul=5;
	graf g(simpul);
	
	g.tambahsisi(0,1);
	g.tambahsisi(0,4);
	g.tambahsisi(1,2);
	g.tambahsisi(1,3);
	g.tambahsisi(1,4);
	g.tambahsisi(2,3);
	g.tambahsisi(3,4);
	
	cout<<"Graph tak-berarahan: "<<endl;
	
	g.tampilkan();
	cout<<endl;
	
	return 0;
}

