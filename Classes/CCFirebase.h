//
//  CCFirebase.h
//  
//
//  Created by Atsushi Yoshida on 2016/08/23.
//
//

#ifndef CCFirebase_h
#define CCFirebase_h

namespace oke_ya{

class Firebase
{
public:
    static Firebase* getInstance();
    static Firebase* s_sharedFirebase;
    virtual bool init();
    virtual void showAds() const = 0;
};

}

#endif /* CCFirebase_h */
