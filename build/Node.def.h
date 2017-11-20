/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::addDependence_2_closure : public SDAG::Closure {
            CProxy_Node dep;


      addDependence_2_closure() {
        init();
      }
      addDependence_2_closure(CkMigrateMessage*) {
        init();
      }
            CProxy_Node & getP0() { return dep;}
      void pup(PUP::er& __p) {
        __p | dep;
        packClosure(__p);
      }
      virtual ~addDependence_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(addDependence_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::exec_3_closure : public SDAG::Closure {
            CProxy_Node pereProxy;


      exec_3_closure() {
        init();
      }
      exec_3_closure(CkMigrateMessage*) {
        init();
      }
            CProxy_Node & getP0() { return pereProxy;}
      void pup(PUP::er& __p) {
        __p | pereProxy;
        packClosure(__p);
      }
      virtual ~exec_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(exec_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::exec_4_closure : public SDAG::Closure {
      

      exec_4_closure() {
        init();
      }
      exec_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~exec_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(exec_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::execCommand_5_closure : public SDAG::Closure {
      

      execCommand_5_closure() {
        init();
      }
      execCommand_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~execCommand_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(execCommand_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::done_6_closure : public SDAG::Closure {
      

      done_6_closure() {
        init();
      }
      done_6_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~done_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(done_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: chare Node: Chare{
Node(const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande);
void addDependence(const CProxy_Node &dep);
void exec(const CProxy_Node &pereProxy);
void exec();
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
/* DEFS: void addDependence(const CProxy_Node &dep);
 */

void CProxy_Node::addDependence(const CProxy_Node &dep, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CProxy_Node &dep
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_Node &)dep;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_Node &)dep;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Node::idx_addDependence_marshall2(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Node::idx_addDependence_marshall2(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Node::idx_addDependence_marshall2(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function

int CkIndex_Node::reg_addDependence_marshall2() {
  int epidx = CkRegisterEp("addDependence(const CProxy_Node &dep)",
      _call_addDependence_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_addDependence_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_addDependence_marshall2);

  return epidx;
}


void CkIndex_Node::_call_addDependence_marshall2(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CProxy_Node &dep*/
  PUP::fromMem implP(impl_buf);
  CProxy_Node dep; implP|dep;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->addDependence(dep);
}

int CkIndex_Node::_callmarshall_addDependence_marshall2(char* impl_buf, void* impl_obj_void) {
  Node* impl_obj = static_cast< Node *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CProxy_Node &dep*/
  PUP::fromMem implP(impl_buf);
  CProxy_Node dep; implP|dep;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->addDependence(dep);
  return implP.size();
}

void CkIndex_Node::_marshallmessagepup_addDependence_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CProxy_Node &dep*/
  PUP::fromMem implP(impl_buf);
  CProxy_Node dep; implP|dep;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("dep");
  implDestP|dep;
}
PUPable_def(SINGLE_ARG(Closure_Node::addDependence_2_closure))
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
    int destPE=CkChareMsgPrep(CkIndex_Node::idx_exec_marshall3(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Node::idx_exec_marshall3(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Node::idx_exec_marshall3(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function

int CkIndex_Node::reg_exec_marshall3() {
  int epidx = CkRegisterEp("exec(const CProxy_Node &pereProxy)",
      _call_exec_marshall3, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_exec_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_exec_marshall3);

  return epidx;
}


void CkIndex_Node::_call_exec_marshall3(void* impl_msg, void* impl_obj_void)
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

int CkIndex_Node::_callmarshall_exec_marshall3(char* impl_buf, void* impl_obj_void) {
  Node* impl_obj = static_cast< Node *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CProxy_Node &pereProxy*/
  PUP::fromMem implP(impl_buf);
  CProxy_Node pereProxy; implP|pereProxy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->exec(pereProxy);
  return implP.size();
}

void CkIndex_Node::_marshallmessagepup_exec_marshall3(PUP::er &implDestP,void *impl_msg) {
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
PUPable_def(SINGLE_ARG(Closure_Node::exec_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exec();
 */

void CProxy_Node::exec(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  static_cast<void>(impl_e_opts);
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Node::idx_exec_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Node::idx_exec_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Node::idx_exec_void(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function

int CkIndex_Node::reg_exec_void() {
  int epidx = CkRegisterEp("exec()",
      _call_exec_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Node::_call_exec_void(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->exec();
}
PUPable_def(SINGLE_ARG(Closure_Node::exec_4_closure))
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
PUPable_def(SINGLE_ARG(Closure_Node::execCommand_5_closure))
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
PUPable_def(SINGLE_ARG(Closure_Node::done_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Node::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: Node(const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande);
  idx_Node_marshall1();

  // REG: void addDependence(const CProxy_Node &dep);
  idx_addDependence_marshall2();

  // REG: void exec(const CProxy_Node &pereProxy);
  idx_exec_marshall3();

  // REG: void exec();
  idx_exec_void();

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
void addDependence(const CProxy_Node &dep);
void exec(const CProxy_Node &pereProxy);
void exec();
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
