class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string>res;
        int curr = 0, oglen = 0;
        vector<string>aux;
        //stores the words for the current row
        for(string s : words)
        {
            int l = s.length();
            // checking if the word can be taken in the current row or not
            if(maxWidth-curr>l) 
            {
                curr+=s.length()+1;
                oglen+=s.length();
                aux.push_back(s);
            }
            else if(maxWidth-curr==l)
            {
                curr+=s.length();
                oglen+=s.length();
                aux.push_back(s);
            }
            else
            {
                curr = 0;
                string help = "";
                int totspaces = maxWidth-oglen; // total spaces needed to fit in the row
            
                oglen=0;
                int pos = aux.size()-1;
                //SIMULATION
                for(string x : aux)
                {
                    int spaces=0;
                    if(pos!=0)
                        spaces = (ceil)(totspaces*1.00/pos);
                    string sp="";
                    for(int i=0;i<spaces;i++)
                        sp+=" ";
                    help+=x+sp;
                    totspaces-=spaces;
                    pos--;
                }
                aux.clear();
                help=help.substr(0,maxWidth);
                int extra=maxWidth-help.length();
                for(int i=0;i<extra;i++)
                    help+=" ";
                res.push_back(help);

                aux.push_back(s);
                curr+=s.length()+1;
                oglen+=s.length();
            }
        }
        string help = "";
        for(string x : aux)
        {
            help+=x+" ";
        }
        int spaces=maxWidth-help.length();
        for(int i=0;i<spaces;i++)
            help+=" ";
        help = help.substr(0, maxWidth);
        res.push_back(help);
        return res;
    }
};