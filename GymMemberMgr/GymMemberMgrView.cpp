
// GymMemberMgrView.cpp : implementation of the CGymMemberMgrView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "GymMemberMgr.h"
#endif

#include "GymMemberMgrDoc.h"
#include "GymMemberMgrView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGymMemberMgrView

IMPLEMENT_DYNCREATE(CGymMemberMgrView, CView)

BEGIN_MESSAGE_MAP(CGymMemberMgrView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CGymMemberMgrView construction/destruction

CGymMemberMgrView::CGymMemberMgrView() noexcept
{
	// TODO: add construction code here

}

CGymMemberMgrView::~CGymMemberMgrView()
{
}

BOOL CGymMemberMgrView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CGymMemberMgrView drawing

void CGymMemberMgrView::OnDraw(CDC* /*pDC*/)
{
	CGymMemberMgrDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CGymMemberMgrView printing

BOOL CGymMemberMgrView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CGymMemberMgrView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CGymMemberMgrView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CGymMemberMgrView diagnostics

#ifdef _DEBUG
void CGymMemberMgrView::AssertValid() const
{
	CView::AssertValid();
}

void CGymMemberMgrView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGymMemberMgrDoc* CGymMemberMgrView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGymMemberMgrDoc)));
	return (CGymMemberMgrDoc*)m_pDocument;
}
#endif //_DEBUG


// CGymMemberMgrView message handlers
