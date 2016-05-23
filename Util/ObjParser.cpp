#include "ObjParser.h"

ObjParser::ObjParser( void ) {}

ObjParser::ObjParser( FILE *file ){
	fp = file;
	readObj();
}

ObjParser::~ObjParser( void ) {}

typedef struct position SPosition;
struct position
{
    float x, y, z;
};

void ObjParser::readObj( void ){
    /* Reading Object File */
    
    if (!fp){printf("File could not be opened\n"); exit(0);}
    char v[5];
    float x, y, z; 
    vector<SPosition> vertices;
    vector<SPosition> normals;
    vector<SPosition> texture;
    float i=0,j=0,k=0;
    int fcount =0;
    while( fscanf( fp, "%s", v) != EOF ){
        while(strcmp(v,"v") !=0 && strcmp(v,"f") !=0 && strcmp(v,"vn") !=0 && strcmp(v,"vt") !=0){
			if(fscanf( fp, "%s", v) == EOF) break;
        }
        
        if(strcmp("v",v) == 0){
            fscanf(fp,"%f %f %f",&x, &y, &z );
            SPosition aux;
            aux.x=x;
            aux.y=y;
            aux.z=z;
            vertices.push_back(aux);
        }else if (strcmp("vn",v) == 0){
            fscanf(fp,"%f %f %f",&x, &y, &z );
            SPosition aux;
            aux.x=x;
            aux.y=y;
            aux.z=z;
            normals.push_back(aux);
        }else if (strcmp("vt",v) == 0){
            fscanf(fp,"%f %f",&x, &y );
            SPosition aux;
            aux.x=x;
            aux.y=y;
            texture.push_back(aux);
        }else if (strcmp("f",v) == 0){
            int i,j,k;
            int ni,nj,nk;
            int ti,tj,tk;
            
            fscanf(fp,"%d %*c %d %*c %d",&i,&ti,&ni);
            fscanf(fp,"%d %*c %d %*c %d",&j,&tj,&nj);
            fscanf(fp,"%d %*c %d %*c %d",&k,&tk,&nk);
            i--;
            j--;
            k--;
            ni--;
            nj--;
            nk--;
            ti--;
            tj--;
            tk--;

 	    vector<float> auxV;

 	    auxV.push_back(normals[ni].x);
            auxV.push_back(normals[nj].y);
            auxV.push_back(normals[nk].z);
            
            auxV.push_back(vertices[i].x);
            auxV.push_back(vertices[i].y);
            auxV.push_back(vertices[i].z);
            
            auxV.push_back(texture[ti].x);
            auxV.push_back(texture[ti].y);
            
            auxV.push_back(vertices[j].x);
            auxV.push_back(vertices[j].y);
            auxV.push_back(vertices[j].z);
            
            auxV.push_back(texture[tj].x);
            auxV.push_back(texture[tj].y);
            
            auxV.push_back(vertices[k].x);
            auxV.push_back(vertices[k].y);
            auxV.push_back(vertices[k].z);
            
            auxV.push_back(texture[tk].x);
            auxV.push_back(texture[tk].y);

            faces.push_back(auxV);
            
            fcount++;
        }
    }
}
