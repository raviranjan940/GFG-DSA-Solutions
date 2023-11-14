//Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        string s = s1 + s1;
        return (s.find(s2)!=-1) ? true : false;
    }
