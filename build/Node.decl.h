#ifndef _DECL_Node_H_
#define _DECL_Node_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: chare Node: Chare{
Node(const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande);
sync std::string getName();
sync std::vector<CProxy_Node > getDependencesVector();
void setDependencesVector(const std::vector<CProxy_Node > &dependencesVector);
sync std::string getCommand();
void displayNode();
void exec(const CProxy_Node &pereProxy);
void execCommand();
void done();
};
 */
 class Node;
 class CkIndex_Node;
 class CProxy_Node;
/* --------------- index object ------------------ */
class CkIndex_Node:public CkIndex_Chare{
  public:
    typedef Node local_t;
    typedef CkIndex_Node index_t;
    typedef CProxy_Node proxy_t;
    typedef CProxy_Node element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Node(const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande);
     */
    // Entry point registration at startup
    
    static int reg_Node_marshall1();
    // Entry point index lookup
    
    inline static int idx_Node_marshall1() {
      static int epidx = reg_Node_marshall1();
      return epidx;
    }

    
    static int ckNew(const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande) { return idx_Node_marshall1(); }
    
    static void _call_Node_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Node_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_Node_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_Node_marshall1(PUP::er &p,void *msg);
    /* DECLS: sync std::string getName();
     */
    // Entry point registration at startup
    
    static int reg_getName_void();
    // Entry point index lookup
    
    inline static int idx_getName_void() {
      static int epidx = reg_getName_void();
      return epidx;
    }

    
    inline static int idx_getName(std::string (Node::*)() ) {
      return idx_getName_void();
    }


    
    static int getName() { return idx_getName_void(); }
    
    static void _call_getName_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getName_void(void* impl_msg, void* impl_obj);
    /* DECLS: sync std::vector<CProxy_Node > getDependencesVector();
     */
    // Entry point registration at startup
    
    static int reg_getDependencesVector_void();
    // Entry point index lookup
    
    inline static int idx_getDependencesVector_void() {
      static int epidx = reg_getDependencesVector_void();
      return epidx;
    }

    
    inline static int idx_getDependencesVector(std::vector<CProxy_Node > (Node::*)() ) {
      return idx_getDependencesVector_void();
    }


    
    static int getDependencesVector() { return idx_getDependencesVector_void(); }
    
    static void _call_getDependencesVector_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getDependencesVector_void(void* impl_msg, void* impl_obj);
    /* DECLS: void setDependencesVector(const std::vector<CProxy_Node > &dependencesVector);
     */
    // Entry point registration at startup
    
    static int reg_setDependencesVector_marshall4();
    // Entry point index lookup
    
    inline static int idx_setDependencesVector_marshall4() {
      static int epidx = reg_setDependencesVector_marshall4();
      return epidx;
    }

    
    inline static int idx_setDependencesVector(void (Node::*)(const std::vector<CProxy_Node > &dependencesVector) ) {
      return idx_setDependencesVector_marshall4();
    }


    
    static int setDependencesVector(const std::vector<CProxy_Node > &dependencesVector) { return idx_setDependencesVector_marshall4(); }
    
    static void _call_setDependencesVector_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setDependencesVector_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setDependencesVector_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setDependencesVector_marshall4(PUP::er &p,void *msg);
    /* DECLS: sync std::string getCommand();
     */
    // Entry point registration at startup
    
    static int reg_getCommand_void();
    // Entry point index lookup
    
    inline static int idx_getCommand_void() {
      static int epidx = reg_getCommand_void();
      return epidx;
    }

    
    inline static int idx_getCommand(std::string (Node::*)() ) {
      return idx_getCommand_void();
    }


    
    static int getCommand() { return idx_getCommand_void(); }
    
    static void _call_getCommand_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getCommand_void(void* impl_msg, void* impl_obj);
    /* DECLS: void displayNode();
     */
    // Entry point registration at startup
    
    static int reg_displayNode_void();
    // Entry point index lookup
    
    inline static int idx_displayNode_void() {
      static int epidx = reg_displayNode_void();
      return epidx;
    }

    
    inline static int idx_displayNode(void (Node::*)() ) {
      return idx_displayNode_void();
    }


    
    static int displayNode() { return idx_displayNode_void(); }
    
    static void _call_displayNode_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_displayNode_void(void* impl_msg, void* impl_obj);
    /* DECLS: void exec(const CProxy_Node &pereProxy);
     */
    // Entry point registration at startup
    
    static int reg_exec_marshall7();
    // Entry point index lookup
    
    inline static int idx_exec_marshall7() {
      static int epidx = reg_exec_marshall7();
      return epidx;
    }

    
    inline static int idx_exec(void (Node::*)(const CProxy_Node &pereProxy) ) {
      return idx_exec_marshall7();
    }


    
    static int exec(const CProxy_Node &pereProxy) { return idx_exec_marshall7(); }
    
    static void _call_exec_marshall7(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_exec_marshall7(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_exec_marshall7(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_exec_marshall7(PUP::er &p,void *msg);
    /* DECLS: void execCommand();
     */
    // Entry point registration at startup
    
    static int reg_execCommand_void();
    // Entry point index lookup
    
    inline static int idx_execCommand_void() {
      static int epidx = reg_execCommand_void();
      return epidx;
    }

    
    inline static int idx_execCommand(void (Node::*)() ) {
      return idx_execCommand_void();
    }


    
    static int execCommand() { return idx_execCommand_void(); }
    
    static void _call_execCommand_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_execCommand_void(void* impl_msg, void* impl_obj);
    /* DECLS: void done();
     */
    // Entry point registration at startup
    
    static int reg_done_void();
    // Entry point index lookup
    
    inline static int idx_done_void() {
      static int epidx = reg_done_void();
      return epidx;
    }

    
    inline static int idx_done(void (Node::*)() ) {
      return idx_done_void();
    }


    
    static int done() { return idx_done_void(); }
    
    static void _call_done_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_done_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_Node:public CProxy_Chare{
  public:
    typedef Node local_t;
    typedef CkIndex_Node index_t;
    typedef CProxy_Node proxy_t;
    typedef CProxy_Node element_t;

    CProxy_Node(void) {};
    CProxy_Node(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_Node(const Chare *c) : CProxy_Chare(c){  }

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
    Node *ckLocal(void) const
    { return (Node *)CkLocalChare(&ckGetChareID()); }
/* DECLS: Node(const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande);
 */
    static CkChareID ckNew(const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande, int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande, CkChareID* pcid, int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_Node(const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande, int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: sync std::string getName();
 */
    
    std::string getName(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: sync std::vector<CProxy_Node > getDependencesVector();
 */
    
    std::vector<CProxy_Node > getDependencesVector(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setDependencesVector(const std::vector<CProxy_Node > &dependencesVector);
 */
    
    void setDependencesVector(const std::vector<CProxy_Node > &dependencesVector, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: sync std::string getCommand();
 */
    
    std::string getCommand(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void displayNode();
 */
    
    void displayNode(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void exec(const CProxy_Node &pereProxy);
 */
    
    void exec(const CProxy_Node &pereProxy, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void execCommand();
 */
    
    void execCommand(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void done();
 */
    
    void done(const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxy_Node)
#define Node_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_Node>CBase_Node;

/* ---------------- method closures -------------- */
class Closure_Node {
  public:


    struct getName_2_closure;


    struct getDependencesVector_3_closure;


    struct setDependencesVector_4_closure;


    struct getCommand_5_closure;


    struct displayNode_6_closure;


    struct exec_7_closure;


    struct execCommand_8_closure;


    struct done_9_closure;

};

extern void _registerNode(void);
#endif
