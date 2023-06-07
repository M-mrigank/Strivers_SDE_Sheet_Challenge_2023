#include <bits/stdc++.h> 
/***************************************************************************

	Class for graph node is as follows:

	class graphNode
	{
		public:
    		int data;
    	vector<graphNode *> neighbours;
    	graphNode()
    	{
        	data = 0;
        	neighbours = vector<graphNode *>();
    	}

    	graphNode(int val)
    	{
        	data = val;
        	neighbours = vector<graphNode *>();
    	}

    	graphNode(int val, vector<graphNode *> neighbours)
    	{
        	data = val;
        	this->neighbours = neighbours;
    	}
	};

******************************************************************************/
 unordered_map<graphNode*, graphNode*>m;
graphNode *cloneGraph(graphNode *node)
{
    // Write your code here.
	if(!node){return NULL;}
        if(m.find(node)==m.end()){
            m[node]=new graphNode(node->data, {});
            for(auto it: node->neighbours){
                m[node]->neighbours.push_back(cloneGraph(it));
            }
        }
        return m[node];
}
