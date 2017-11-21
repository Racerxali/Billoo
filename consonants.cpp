
int findNumberofConsonants(std::string str)
{
   int consonants=0;
    for(auto &var:str)
    {

        if(var>='a' && var<='z' && var!='a' && var!='e' && var!='i' && var !='o' && var!='u')
        {
            consonants++;
        }
    }
    return consonants;
}

int Consonant(std::string input1,int input2)
{
    if(input1.size()<1 || input1.size()>100000)
    {
        return -1;
    }
    if(input2<1 || input1.size()>10000)
    {
        return -1;
    }


    std::map<int,std::vector<std::string>,std::less<int>>allSubstringsMap;

    //find all substrings
    for (int i = 0; i < input1.size(); i++)
    {
        for (int len = 1; len <= input1.size() - i; len++)
        {
            std::string subStr=input1.substr(i, len);
            allSubstringsMap[subStr.size()].push_back(subStr);
        }
    }

    int returnVal=-1;
    for(const auto var:allSubstringsMap)
    {
        for(const auto &var2:var.second)
        {
            if(findNumberofConsonants(var2)>=input2)
            {
                returnVal=var.first;
            }
            else
            {
                returnVal=-1;
                break;
            }
        }
        if(returnVal!=-1)
        {
           return returnVal;
        }
    }

    return returnVal;
}
