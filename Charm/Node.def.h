/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::getName_2_closure : public SDAG::Closure {
      

      getName_2_closure() {
        init();
      }
      getName_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~getName_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(getName_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::getDependencesVector_3_closure : public SDAG::Closure {
      

      getDependencesVector_3_closure() {
        init();
      }
      getDependencesVector_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~getDependencesVector_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(getDependencesVector_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::setDependencesVector_4_closure : public SDAG::Closure {
            std::vector<CProxy_Node > dependencesVector;


      setDependencesVector_4_closure() {
        init();
      }
      setDependencesVector_4_closure(CkMigrateMessage*) {
        init();
      }
            std::vector<CProxy_Node > & getP0() { return dependencesVector;}
      void pup(PUP::er& __p) {
        __p | dependencesVector;
        packClosure(__p);
      }
      virtual ~setDependencesVector_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(setDependencesVector_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::getCommand_5_closure : public SDAG::Closure {
      

      getCommand_5_closure() {
        init();
      }
      getCommand_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~getCommand_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(getCommand_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::displayNode_6_closure : public SDAG::Closure {
      

      displayNode_6_closure() {
        init();
      }
      displayNode_6_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~displayNode_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(displayNode_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::exec_7_closure : public SDAG::Closure {
            CProxy_Node pereProxy;


      exec_7_closure() {
        init();
      }
      exec_7_closure(CkMigrateMessage*) {
        init();
      }
            CProxy_Node & getP0() { return pereProxy;}
      void pup(PUP::er& __p) {
        __p | pereProxy;
        packClosure(__p);
      }
      virtual ~exec_7_closure() {
      }
      PUPable_decl(SINGLE_ARG(exec_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::execCommand_8_closure : public SDAG::Closure {
      

      execCommand_8_closure() {
        init();
      }
      execCommand_8_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~execCommand_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(execCommand_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::done_9_closure : public SDAG::Closure {
      

      done_9_closure() {
        init();
      }
      done_9_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~done_9_closure() {
      }
      PUPable_decl(SINGLE_ARG(done_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: chare Node: Chare{
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
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Node::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Node(const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande);
 */

CkChareID CProxy_Node::ckNew(const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande, int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)nom;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<CProxy_Node > &)dependancesVector;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)commande;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)nom;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<CProxy_Node > &)dependancesVector;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)commande;
  }
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Node::__idx, CkIndex_Node::idx_Node_marshall1(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}

void CProxy_Node::ckNew(const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande, CkChareID* pcid, int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)nom;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<CProxy_Node > &)dependancesVector;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)commande;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)nom;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<CProxy_Node > &)dependancesVector;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)commande;
  }
  CkCreateChare(CkIndex_Node::__idx, CkIndex_Node::idx_Node_marshall1(), impl_msg, pcid, impl_onPE);
}

  CProxy_Node::CProxy_Node(const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande, int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)nom;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<CProxy_Node > &)dependancesVector;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)commande;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)nom;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<CProxy_Node > &)dependancesVector;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)commande;
  }
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Node::__idx, CkIndex_Node::idx_Node_marshall1(), impl_msg, &impl_ret, impl_onPE);
  ckSetChareID(impl_ret);
}

// Entry point registration function

int CkIndex_Node::reg_Node_marshall1() {
  int epidx = CkRegisterEp("Node(const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande)",
      _call_Node_marshall1, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_Node_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_Node_marshall1);

  return epidx;
}


void CkIndex_Node::_call_Node_marshall1(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande*/
  PUP::fromMem implP(impl_buf);
  std::string nom; implP|nom;
  std::vector<CProxy_Node > dependancesVector; implP|dependancesVector;
  std::string commande; implP|commande;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) Node(nom, dependancesVector, commande);
}

int CkIndex_Node::_callmarshall_Node_marshall1(char* impl_buf, void* impl_obj_void) {
  Node* impl_obj = static_cast< Node *>(impl_obj_void);
  /*Unmarshall pup'd fields: const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande*/
  PUP::fromMem implP(impl_buf);
  std::string nom; implP|nom;
  std::vector<CProxy_Node > dependancesVector; implP|dependancesVector;
  std::string commande; implP|commande;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) Node(nom, dependancesVector, commande);
  return implP.size();
}

void CkIndex_Node::_marshallmessagepup_Node_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande*/
  PUP::fromMem implP(impl_buf);
  std::string nom; implP|nom;
  std::vector<CProxy_Node > dependancesVector; implP|dependancesVector;
  std::string commande; implP|commande;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("nom");
  implDestP|nom;
  if (implDestP.hasComments()) implDestP.comment("dependancesVector");
  implDestP|dependancesVector;
  if (implDestP.hasComments()) implDestP.comment("commande");
  implDestP|commande;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync std::string getName();
 */

std::string CProxy_Node::getName(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  static_cast<void>(impl_e_opts);
  void *impl_msg = CkAllocSysMsg();
  CkMarshallMsg *impl_msg_typed_ret = (CkMarshallMsg *)CkRemoteCall(CkIndex_Node::idx_getName_void(), impl_msg, &ckGetChareID());
  char *impl_buf_ret=impl_msg_typed_ret->msgBuf; 
  PUP::fromMem implPS(impl_buf_ret); 
  std::string retval; implPS|retval; 
  CkFreeMsg(impl_msg_typed_ret); 
  return retval; 
}

// Entry point registration function

int CkIndex_Node::reg_getName_void() {
  int epidx = CkRegisterEp("getName()",
      _call_getName_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Node::_call_getName_void(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node *>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkFreeSysMsg(impl_msg);
  std::string impl_ret_val=   impl_obj->getName();
  //Marshall: impl_ret_val
  int impl_ret_size=0;
  { //Find the size of the PUP'd data
    PUP::sizer implPS;
    implPS|impl_ret_val;
    impl_ret_size+=implPS.size();
  };
  CkMarshallMsg *impl_retMsg=CkAllocateMarshallMsg(impl_ret_size, NULL);
  { //Copy over the PUP'd data;
    PUP::toMem implPS((void *)impl_retMsg->msgBuf);
    implPS|impl_ret_val;
  };
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
PUPable_def(SINGLE_ARG(Closure_Node::getName_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync std::vector<CProxy_Node > getDependencesVector();
 */

std::vector<CProxy_Node > CProxy_Node::getDependencesVector(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  static_cast<void>(impl_e_opts);
  void *impl_msg = CkAllocSysMsg();
  CkMarshallMsg *impl_msg_typed_ret = (CkMarshallMsg *)CkRemoteCall(CkIndex_Node::idx_getDependencesVector_void(), impl_msg, &ckGetChareID());
  char *impl_buf_ret=impl_msg_typed_ret->msgBuf; 
  PUP::fromMem implPS(impl_buf_ret); 
  std::vector<CProxy_Node > retval; implPS|retval; 
  CkFreeMsg(impl_msg_typed_ret); 
  return retval; 
}

// Entry point registration function

int CkIndex_Node::reg_getDependencesVector_void() {
  int epidx = CkRegisterEp("getDependencesVector()",
      _call_getDependencesVector_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Node::_call_getDependencesVector_void(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node *>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkFreeSysMsg(impl_msg);
  std::vector<CProxy_Node > impl_ret_val=   impl_obj->getDependencesVector();
  //Marshall: impl_ret_val
  int impl_ret_size=0;
  { //Find the size of the PUP'd data
    PUP::sizer implPS;
    implPS|impl_ret_val;
    impl_ret_size+=implPS.size();
  };
  CkMarshallMsg *impl_retMsg=CkAllocateMarshallMsg(impl_ret_size, NULL);
  { //Copy over the PUP'd data;
    PUP::toMem implPS((void *)impl_retMsg->msgBuf);
    implPS|impl_ret_val;
  };
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
PUPable_def(SINGLE_ARG(Closure_Node::getDependencesVector_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setDependencesVector(const std::vector<CProxy_Node > &dependencesVector);
 */

void CProxy_Node::setDependencesVector(const std::vector<CProxy_Node > &dependencesVector, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const std::vector<CProxy_Node > &dependencesVector
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<CProxy_Node > &)dependencesVector;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<CProxy_Node > &)dependencesVector;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Node::idx_setDependencesVector_marshall4(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Node::idx_setDependencesVector_marshall4(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Node::idx_setDependencesVector_marshall4(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function

int CkIndex_Node::reg_setDependencesVector_marshall4() {
  int epidx = CkRegisterEp("setDependencesVector(const std::vector<CProxy_Node > &dependencesVector)",
      _call_setDependencesVector_marshall4, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setDependencesVector_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setDependencesVector_marshall4);

  return epidx;
}


void CkIndex_Node::_call_setDependencesVector_marshall4(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::vector<CProxy_Node > &dependencesVector*/
  PUP::fromMem implP(impl_buf);
  std::vector<CProxy_Node > dependencesVector; implP|dependencesVector;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setDependencesVector(dependencesVector);
}

int CkIndex_Node::_callmarshall_setDependencesVector_marshall4(char* impl_buf, void* impl_obj_void) {
  Node* impl_obj = static_cast< Node *>(impl_obj_void);
  /*Unmarshall pup'd fields: const std::vector<CProxy_Node > &dependencesVector*/
  PUP::fromMem implP(impl_buf);
  std::vector<CProxy_Node > dependencesVector; implP|dependencesVector;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setDependencesVector(dependencesVector);
  return implP.size();
}

void CkIndex_Node::_marshallmessagepup_setDependencesVector_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::vector<CProxy_Node > &dependencesVector*/
  PUP::fromMem implP(impl_buf);
  std::vector<CProxy_Node > dependencesVector; implP|dependencesVector;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("dependencesVector");
  implDestP|dependencesVector;
}
PUPable_def(SINGLE_ARG(Closure_Node::setDependencesVector_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync std::string getCommand();
 */

std::string CProxy_Node::getCommand(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  static_cast<void>(impl_e_opts);
  void *impl_msg = CkAllocSysMsg();
  CkMarshallMsg *impl_msg_typed_ret = (CkMarshallMsg *)CkRemoteCall(CkIndex_Node::idx_getCommand_void(), impl_msg, &ckGetChareID());
  char *impl_buf_ret=impl_msg_typed_ret->msgBuf; 
  PUP::fromMem implPS(impl_buf_ret); 
  std::string retval; implPS|retval; 
  CkFreeMsg(impl_msg_typed_ret); 
  return retval; 
}

// Entry point registration function

int CkIndex_Node::reg_getCommand_void() {
  int epidx = CkRegisterEp("getCommand()",
      _call_getCommand_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Node::_call_getCommand_void(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node *>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkFreeSysMsg(impl_msg);
  std::string impl_ret_val=   impl_obj->getCommand();
  //Marshall: impl_ret_val
  int impl_ret_size=0;
  { //Find the size of the PUP'd data
    PUP::sizer implPS;
    implPS|impl_ret_val;
    impl_ret_size+=implPS.size();
  };
  CkMarshallMsg *impl_retMsg=CkAllocateMarshallMsg(impl_ret_size, NULL);
  { //Copy over the PUP'd data;
    PUP::toMem implPS((void *)impl_retMsg->msgBuf);
    implPS|impl_ret_val;
  };
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
PUPable_def(SINGLE_ARG(Closure_Node::getCommand_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void displayNode();
 */

void CProxy_Node::displayNode(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  static_cast<void>(impl_e_opts);
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Node::idx_displayNode_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Node::idx_displayNode_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Node::idx_displayNode_void(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function

int CkIndex_Node::reg_displayNode_void() {
  int epidx = CkRegisterEp("displayNode()",
      _call_displayNode_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Node::_call_displayNode_void(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->displayNode();
}
PUPable_def(SINGLE_ARG(Closure_Node::displayNode_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exec(const CProxy_Node &pereProxy);
 */

void CProxy_Node::exec(const CProxy_Node &pereProxy, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CProxy_Node &pereProxy
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_Node &)pereProxy;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_Node &)pereProxy;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Node::idx_exec_marshall7(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Node::idx_exec_marshall7(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Node::idx_exec_marshall7(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function

int CkIndex_Node::reg_exec_marshall7() {
  int epidx = CkRegisterEp("exec(const CProxy_Node &pereProxy)",
      _call_exec_marshall7, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_exec_marshall7);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_exec_marshall7);

  return epidx;
}


void CkIndex_Node::_call_exec_marshall7(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CProxy_Node &pereProxy*/
  PUP::fromMem implP(impl_buf);
  CProxy_Node pereProxy; implP|pereProxy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->exec(pereProxy);
}

int CkIndex_Node::_callmarshall_exec_marshall7(char* impl_buf, void* impl_obj_void) {
  Node* impl_obj = static_cast< Node *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CProxy_Node &pereProxy*/
  PUP::fromMem implP(impl_buf);
  CProxy_Node pereProxy; implP|pereProxy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->exec(pereProxy);
  return implP.size();
}

void CkIndex_Node::_marshallmessagepup_exec_marshall7(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CProxy_Node &pereProxy*/
  PUP::fromMem implP(impl_buf);
  CProxy_Node pereProxy; implP|pereProxy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("pereProxy");
  implDestP|pereProxy;
}
PUPable_def(SINGLE_ARG(Closure_Node::exec_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void execCommand();
 */

void CProxy_Node::execCommand(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  static_cast<void>(impl_e_opts);
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Node::idx_execCommand_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Node::idx_execCommand_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Node::idx_execCommand_void(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function

int CkIndex_Node::reg_execCommand_void() {
  int epidx = CkRegisterEp("execCommand()",
      _call_execCommand_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Node::_call_execCommand_void(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->execCommand();
}
PUPable_def(SINGLE_ARG(Closure_Node::execCommand_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void done();
 */

void CProxy_Node::done(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  static_cast<void>(impl_e_opts);
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Node::idx_done_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Node::idx_done_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Node::idx_done_void(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function

int CkIndex_Node::reg_done_void() {
  int epidx = CkRegisterEp("done()",
      _call_done_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Node::_call_done_void(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->done();
}
PUPable_def(SINGLE_ARG(Closure_Node::done_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Node::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: Node(const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande);
  idx_Node_marshall1();

  // REG: sync std::string getName();
  idx_getName_void();

  // REG: sync std::vector<CProxy_Node > getDependencesVector();
  idx_getDependencesVector_void();

  // REG: void setDependencesVector(const std::vector<CProxy_Node > &dependencesVector);
  idx_setDependencesVector_marshall4();

  // REG: sync std::string getCommand();
  idx_getCommand_void();

  // REG: void displayNode();
  idx_displayNode_void();

  // REG: void exec(const CProxy_Node &pereProxy);
  idx_exec_marshall7();

  // REG: void execCommand();
  idx_execCommand_void();

  // REG: void done();
  idx_done_void();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerNode(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: chare Node: Chare{
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
  CkIndex_Node::__register("Node", sizeof(Node));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Node::virtual_pup(PUP::er &p) {
    recursive_pup<Node >(dynamic_cast<Node* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
