/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_StringNode::getName_3_closure : public SDAG::Closure {
      

      getName_3_closure() {
        init();
      }
      getName_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~getName_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(getName_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_StringNode::getDependencesVector_4_closure : public SDAG::Closure {
      

      getDependencesVector_4_closure() {
        init();
      }
      getDependencesVector_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~getDependencesVector_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(getDependencesVector_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_StringNode::getCommand_5_closure : public SDAG::Closure {
      

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

    struct Closure_StringNode::deleteDependence_6_closure : public SDAG::Closure {
            std::string dependence;


      deleteDependence_6_closure() {
        init();
      }
      deleteDependence_6_closure(CkMigrateMessage*) {
        init();
      }
            std::string & getP0() { return dependence;}
      void pup(PUP::er& __p) {
        __p | dependence;
        packClosure(__p);
      }
      virtual ~deleteDependence_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(deleteDependence_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_StringNode::displayNode_7_closure : public SDAG::Closure {
      

      displayNode_7_closure() {
        init();
      }
      displayNode_7_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~displayNode_7_closure() {
      }
      PUPable_decl(SINGLE_ARG(displayNode_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: chare StringNode: Chare{
StringNode(const std::string &name, const std::vector<std::string > &dependencesVector, const std::string &command);
StringNode();
sync std::string getName();
sync std::vector<std::string > getDependencesVector();
sync std::string getCommand();
sync bool deleteDependence(const std::string &dependence);
void displayNode();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_StringNode::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: StringNode(const std::string &name, const std::vector<std::string > &dependencesVector, const std::string &command);
 */

CkChareID CProxy_StringNode::ckNew(const std::string &name, const std::vector<std::string > &dependencesVector, const std::string &command, int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const std::string &name, const std::vector<std::string > &dependencesVector, const std::string &command
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)name;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<std::string > &)dependencesVector;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)command;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)name;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<std::string > &)dependencesVector;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)command;
  }
  CkChareID impl_ret;
  CkCreateChare(CkIndex_StringNode::__idx, CkIndex_StringNode::idx_StringNode_marshall1(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}

void CProxy_StringNode::ckNew(const std::string &name, const std::vector<std::string > &dependencesVector, const std::string &command, CkChareID* pcid, int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const std::string &name, const std::vector<std::string > &dependencesVector, const std::string &command
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)name;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<std::string > &)dependencesVector;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)command;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)name;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<std::string > &)dependencesVector;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)command;
  }
  CkCreateChare(CkIndex_StringNode::__idx, CkIndex_StringNode::idx_StringNode_marshall1(), impl_msg, pcid, impl_onPE);
}

  CProxy_StringNode::CProxy_StringNode(const std::string &name, const std::vector<std::string > &dependencesVector, const std::string &command, int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const std::string &name, const std::vector<std::string > &dependencesVector, const std::string &command
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)name;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<std::string > &)dependencesVector;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)command;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)name;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<std::string > &)dependencesVector;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)command;
  }
  CkChareID impl_ret;
  CkCreateChare(CkIndex_StringNode::__idx, CkIndex_StringNode::idx_StringNode_marshall1(), impl_msg, &impl_ret, impl_onPE);
  ckSetChareID(impl_ret);
}

// Entry point registration function

int CkIndex_StringNode::reg_StringNode_marshall1() {
  int epidx = CkRegisterEp("StringNode(const std::string &name, const std::vector<std::string > &dependencesVector, const std::string &command)",
      _call_StringNode_marshall1, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_StringNode_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_StringNode_marshall1);

  return epidx;
}


void CkIndex_StringNode::_call_StringNode_marshall1(void* impl_msg, void* impl_obj_void)
{
  StringNode* impl_obj = static_cast<StringNode *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::string &name, const std::vector<std::string > &dependencesVector, const std::string &command*/
  PUP::fromMem implP(impl_buf);
  std::string name; implP|name;
  std::vector<std::string > dependencesVector; implP|dependencesVector;
  std::string command; implP|command;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) StringNode(name, dependencesVector, command);
}

int CkIndex_StringNode::_callmarshall_StringNode_marshall1(char* impl_buf, void* impl_obj_void) {
  StringNode* impl_obj = static_cast< StringNode *>(impl_obj_void);
  /*Unmarshall pup'd fields: const std::string &name, const std::vector<std::string > &dependencesVector, const std::string &command*/
  PUP::fromMem implP(impl_buf);
  std::string name; implP|name;
  std::vector<std::string > dependencesVector; implP|dependencesVector;
  std::string command; implP|command;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) StringNode(name, dependencesVector, command);
  return implP.size();
}

void CkIndex_StringNode::_marshallmessagepup_StringNode_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::string &name, const std::vector<std::string > &dependencesVector, const std::string &command*/
  PUP::fromMem implP(impl_buf);
  std::string name; implP|name;
  std::vector<std::string > dependencesVector; implP|dependencesVector;
  std::string command; implP|command;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("name");
  implDestP|name;
  if (implDestP.hasComments()) implDestP.comment("dependencesVector");
  implDestP|dependencesVector;
  if (implDestP.hasComments()) implDestP.comment("command");
  implDestP|command;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: StringNode();
 */

CkChareID CProxy_StringNode::ckNew(int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  static_cast<void>(impl_e_opts);
  void *impl_msg = CkAllocSysMsg();
  CkChareID impl_ret;
  CkCreateChare(CkIndex_StringNode::__idx, CkIndex_StringNode::idx_StringNode_void(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}

void CProxy_StringNode::ckNew(CkChareID* pcid, int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  static_cast<void>(impl_e_opts);
  void *impl_msg = CkAllocSysMsg();
  CkCreateChare(CkIndex_StringNode::__idx, CkIndex_StringNode::idx_StringNode_void(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function

int CkIndex_StringNode::reg_StringNode_void() {
  int epidx = CkRegisterEp("StringNode()",
      _call_StringNode_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_StringNode::_call_StringNode_void(void* impl_msg, void* impl_obj_void)
{
  StringNode* impl_obj = static_cast<StringNode *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj_void) StringNode();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync std::string getName();
 */

std::string CProxy_StringNode::getName(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  static_cast<void>(impl_e_opts);
  void *impl_msg = CkAllocSysMsg();
  CkMarshallMsg *impl_msg_typed_ret = (CkMarshallMsg *)CkRemoteCall(CkIndex_StringNode::idx_getName_void(), impl_msg, &ckGetChareID());
  char *impl_buf_ret=impl_msg_typed_ret->msgBuf; 
  PUP::fromMem implPS(impl_buf_ret); 
  std::string retval; implPS|retval; 
  CkFreeMsg(impl_msg_typed_ret); 
  return retval; 
}

// Entry point registration function

int CkIndex_StringNode::reg_getName_void() {
  int epidx = CkRegisterEp("getName()",
      _call_getName_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_StringNode::_call_getName_void(void* impl_msg, void* impl_obj_void)
{
  StringNode* impl_obj = static_cast<StringNode *>(impl_obj_void);
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
PUPable_def(SINGLE_ARG(Closure_StringNode::getName_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync std::vector<std::string > getDependencesVector();
 */

std::vector<std::string > CProxy_StringNode::getDependencesVector(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  static_cast<void>(impl_e_opts);
  void *impl_msg = CkAllocSysMsg();
  CkMarshallMsg *impl_msg_typed_ret = (CkMarshallMsg *)CkRemoteCall(CkIndex_StringNode::idx_getDependencesVector_void(), impl_msg, &ckGetChareID());
  char *impl_buf_ret=impl_msg_typed_ret->msgBuf; 
  PUP::fromMem implPS(impl_buf_ret); 
  std::vector<std::string > retval; implPS|retval; 
  CkFreeMsg(impl_msg_typed_ret); 
  return retval; 
}

// Entry point registration function

int CkIndex_StringNode::reg_getDependencesVector_void() {
  int epidx = CkRegisterEp("getDependencesVector()",
      _call_getDependencesVector_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_StringNode::_call_getDependencesVector_void(void* impl_msg, void* impl_obj_void)
{
  StringNode* impl_obj = static_cast<StringNode *>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkFreeSysMsg(impl_msg);
  std::vector<std::string > impl_ret_val=   impl_obj->getDependencesVector();
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
PUPable_def(SINGLE_ARG(Closure_StringNode::getDependencesVector_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync std::string getCommand();
 */

std::string CProxy_StringNode::getCommand(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  static_cast<void>(impl_e_opts);
  void *impl_msg = CkAllocSysMsg();
  CkMarshallMsg *impl_msg_typed_ret = (CkMarshallMsg *)CkRemoteCall(CkIndex_StringNode::idx_getCommand_void(), impl_msg, &ckGetChareID());
  char *impl_buf_ret=impl_msg_typed_ret->msgBuf; 
  PUP::fromMem implPS(impl_buf_ret); 
  std::string retval; implPS|retval; 
  CkFreeMsg(impl_msg_typed_ret); 
  return retval; 
}

// Entry point registration function

int CkIndex_StringNode::reg_getCommand_void() {
  int epidx = CkRegisterEp("getCommand()",
      _call_getCommand_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_StringNode::_call_getCommand_void(void* impl_msg, void* impl_obj_void)
{
  StringNode* impl_obj = static_cast<StringNode *>(impl_obj_void);
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
PUPable_def(SINGLE_ARG(Closure_StringNode::getCommand_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync bool deleteDependence(const std::string &dependence);
 */

bool CProxy_StringNode::deleteDependence(const std::string &dependence, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const std::string &dependence
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)dependence;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)dependence;
  }
  CkMarshallMsg *impl_msg_typed_ret = (CkMarshallMsg *)CkRemoteCall(CkIndex_StringNode::idx_deleteDependence_marshall6(), impl_msg, &ckGetChareID());
  char *impl_buf_ret=impl_msg_typed_ret->msgBuf; 
  PUP::fromMem implPS(impl_buf_ret); 
  bool retval; implPS|retval; 
  CkFreeMsg(impl_msg_typed_ret); 
  return retval; 
}

// Entry point registration function

int CkIndex_StringNode::reg_deleteDependence_marshall6() {
  int epidx = CkRegisterEp("deleteDependence(const std::string &dependence)",
      _call_deleteDependence_marshall6, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_deleteDependence_marshall6);

  return epidx;
}


void CkIndex_StringNode::_call_deleteDependence_marshall6(void* impl_msg, void* impl_obj_void)
{
  StringNode* impl_obj = static_cast<StringNode *>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::string &dependence*/
  PUP::fromMem implP(impl_buf);
  std::string dependence; implP|dependence;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  bool impl_ret_val=   impl_obj->deleteDependence(dependence);
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

void CkIndex_StringNode::_marshallmessagepup_deleteDependence_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::string &dependence*/
  PUP::fromMem implP(impl_buf);
  std::string dependence; implP|dependence;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("dependence");
  implDestP|dependence;
}
PUPable_def(SINGLE_ARG(Closure_StringNode::deleteDependence_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void displayNode();
 */

void CProxy_StringNode::displayNode(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  static_cast<void>(impl_e_opts);
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_StringNode::idx_displayNode_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_StringNode::idx_displayNode_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_StringNode::idx_displayNode_void(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function

int CkIndex_StringNode::reg_displayNode_void() {
  int epidx = CkRegisterEp("displayNode()",
      _call_displayNode_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_StringNode::_call_displayNode_void(void* impl_msg, void* impl_obj_void)
{
  StringNode* impl_obj = static_cast<StringNode *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->displayNode();
}
PUPable_def(SINGLE_ARG(Closure_StringNode::displayNode_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_StringNode::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: StringNode(const std::string &name, const std::vector<std::string > &dependencesVector, const std::string &command);
  idx_StringNode_marshall1();

  // REG: StringNode();
  idx_StringNode_void();
  CkRegisterDefaultCtor(__idx, idx_StringNode_void());

  // REG: sync std::string getName();
  idx_getName_void();

  // REG: sync std::vector<std::string > getDependencesVector();
  idx_getDependencesVector_void();

  // REG: sync std::string getCommand();
  idx_getCommand_void();

  // REG: sync bool deleteDependence(const std::string &dependence);
  idx_deleteDependence_marshall6();

  // REG: void displayNode();
  idx_displayNode_void();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerStringNode(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: chare StringNode: Chare{
StringNode(const std::string &name, const std::vector<std::string > &dependencesVector, const std::string &command);
StringNode();
sync std::string getName();
sync std::vector<std::string > getDependencesVector();
sync std::string getCommand();
sync bool deleteDependence(const std::string &dependence);
void displayNode();
};
*/
  CkIndex_StringNode::__register("StringNode", sizeof(StringNode));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_StringNode::virtual_pup(PUP::er &p) {
    recursive_pup<StringNode >(dynamic_cast<StringNode* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
