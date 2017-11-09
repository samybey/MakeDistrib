#ifndef _DECL_StringNode_H_
#define _DECL_StringNode_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: chare StringNode: Chare{
StringNode(const std::string &name, const std::vector<std::string > &dependencesVector, const std::string &command);
StringNode();
sync std::string getName();
sync std::vector<std::string > getDependencesVector();
sync std::string getCommand();
sync bool deleteDependence(const std::string &dependence);
void displayNode();
};
 */
 class StringNode;
 class CkIndex_StringNode;
 class CProxy_StringNode;
/* --------------- index object ------------------ */
class CkIndex_StringNode:public CkIndex_Chare{
  public:
    typedef StringNode local_t;
    typedef CkIndex_StringNode index_t;
    typedef CProxy_StringNode proxy_t;
    typedef CProxy_StringNode element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: StringNode(const std::string &name, const std::vector<std::string > &dependencesVector, const std::string &command);
     */
    // Entry point registration at startup
    
    static int reg_StringNode_marshall1();
    // Entry point index lookup
    
    inline static int idx_StringNode_marshall1() {
      static int epidx = reg_StringNode_marshall1();
      return epidx;
    }

    
    static int ckNew(const std::string &name, const std::vector<std::string > &dependencesVector, const std::string &command) { return idx_StringNode_marshall1(); }
    
    static void _call_StringNode_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_StringNode_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_StringNode_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_StringNode_marshall1(PUP::er &p,void *msg);
    /* DECLS: StringNode();
     */
    // Entry point registration at startup
    
    static int reg_StringNode_void();
    // Entry point index lookup
    
    inline static int idx_StringNode_void() {
      static int epidx = reg_StringNode_void();
      return epidx;
    }

    
    static int ckNew() { return idx_StringNode_void(); }
    
    static void _call_StringNode_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_StringNode_void(void* impl_msg, void* impl_obj);
    /* DECLS: sync std::string getName();
     */
    // Entry point registration at startup
    
    static int reg_getName_void();
    // Entry point index lookup
    
    inline static int idx_getName_void() {
      static int epidx = reg_getName_void();
      return epidx;
    }

    
    inline static int idx_getName(std::string (StringNode::*)() ) {
      return idx_getName_void();
    }


    
    static int getName() { return idx_getName_void(); }
    
    static void _call_getName_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getName_void(void* impl_msg, void* impl_obj);
    /* DECLS: sync std::vector<std::string > getDependencesVector();
     */
    // Entry point registration at startup
    
    static int reg_getDependencesVector_void();
    // Entry point index lookup
    
    inline static int idx_getDependencesVector_void() {
      static int epidx = reg_getDependencesVector_void();
      return epidx;
    }

    
    inline static int idx_getDependencesVector(std::vector<std::string > (StringNode::*)() ) {
      return idx_getDependencesVector_void();
    }


    
    static int getDependencesVector() { return idx_getDependencesVector_void(); }
    
    static void _call_getDependencesVector_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getDependencesVector_void(void* impl_msg, void* impl_obj);
    /* DECLS: sync std::string getCommand();
     */
    // Entry point registration at startup
    
    static int reg_getCommand_void();
    // Entry point index lookup
    
    inline static int idx_getCommand_void() {
      static int epidx = reg_getCommand_void();
      return epidx;
    }

    
    inline static int idx_getCommand(std::string (StringNode::*)() ) {
      return idx_getCommand_void();
    }


    
    static int getCommand() { return idx_getCommand_void(); }
    
    static void _call_getCommand_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getCommand_void(void* impl_msg, void* impl_obj);
    /* DECLS: sync bool deleteDependence(const std::string &dependence);
     */
    // Entry point registration at startup
    
    static int reg_deleteDependence_marshall6();
    // Entry point index lookup
    
    inline static int idx_deleteDependence_marshall6() {
      static int epidx = reg_deleteDependence_marshall6();
      return epidx;
    }

    
    inline static int idx_deleteDependence(bool (StringNode::*)(const std::string &dependence) ) {
      return idx_deleteDependence_marshall6();
    }


    
    static int deleteDependence(const std::string &dependence) { return idx_deleteDependence_marshall6(); }
    
    static void _call_deleteDependence_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_deleteDependence_marshall6(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_deleteDependence_marshall6(PUP::er &p,void *msg);
    /* DECLS: void displayNode();
     */
    // Entry point registration at startup
    
    static int reg_displayNode_void();
    // Entry point index lookup
    
    inline static int idx_displayNode_void() {
      static int epidx = reg_displayNode_void();
      return epidx;
    }

    
    inline static int idx_displayNode(void (StringNode::*)() ) {
      return idx_displayNode_void();
    }


    
    static int displayNode() { return idx_displayNode_void(); }
    
    static void _call_displayNode_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_displayNode_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_StringNode:public CProxy_Chare{
  public:
    typedef StringNode local_t;
    typedef CkIndex_StringNode index_t;
    typedef CProxy_StringNode proxy_t;
    typedef CProxy_StringNode element_t;

    CProxy_StringNode(void) {};
    CProxy_StringNode(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_StringNode(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p);
    }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    StringNode *ckLocal(void) const
    { return (StringNode *)CkLocalChare(&ckGetChareID()); }
/* DECLS: StringNode(const std::string &name, const std::vector<std::string > &dependencesVector, const std::string &command);
 */
    static CkChareID ckNew(const std::string &name, const std::vector<std::string > &dependencesVector, const std::string &command, int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const std::string &name, const std::vector<std::string > &dependencesVector, const std::string &command, CkChareID* pcid, int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_StringNode(const std::string &name, const std::vector<std::string > &dependencesVector, const std::string &command, int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: StringNode();
 */
    static CkChareID ckNew(int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(CkChareID* pcid, int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: sync std::string getName();
 */
    
    std::string getName(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: sync std::vector<std::string > getDependencesVector();
 */
    
    std::vector<std::string > getDependencesVector(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: sync std::string getCommand();
 */
    
    std::string getCommand(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: sync bool deleteDependence(const std::string &dependence);
 */
    
    bool deleteDependence(const std::string &dependence, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void displayNode();
 */
    
    void displayNode(const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxy_StringNode)
#define StringNode_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_StringNode>CBase_StringNode;

/* ---------------- method closures -------------- */
class Closure_StringNode {
  public:



    struct getName_3_closure;


    struct getDependencesVector_4_closure;


    struct getCommand_5_closure;


    struct deleteDependence_6_closure;


    struct displayNode_7_closure;

};

extern void _registerStringNode(void);
#endif
