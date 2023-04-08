def containsdupes(self, nums: List[int])->bool:
    hashset = set()

    for n in nums:
        if n in hashset:
            return True
        
        hashset.add(n)
    return False


def isAnagram(self, s:str,t:str)-> bool:
    if len(s) != len(t):
        return False
    
    countS, countT = {},{}

    for i in range(len(s)):
        countS[s[i]] = 1 + countS.get(s[i],0)
        countS[t[i]] = 1 + countT.get(t[i],0)
    
    for c in countS:
        if countS[c] != countT.get(c,0):
            return False
    
    return True

def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
    res = defaultdict(list)
    for s in strs:
        count = [0] * 26
        for c in s:
            count[ord(c) - ord("a")] += 1
        
        res[tuple(count)].append(s)

    return res.values()