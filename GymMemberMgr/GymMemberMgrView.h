
// GymMemberMgrView.h : interface of the CGymMemberMgrView class
//

#pragma once


class CGymMemberMgrView : public CView
{
protected: // create from serialization only
	CGymMemberMgrView() noexcept;
	DECLARE_DYNCREATE(CGymMemberMgrView)

// Attributes
public:
	CGymMemberMgrDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CGymMemberMgrView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in GymMemberMgrView.cpp
inline CGymMemberMgrDoc* CGymMemberMgrView::GetDocument() const
   { return reinterpret_cast<CGymMemberMgrDoc*>(m_pDocument); }
#endif

