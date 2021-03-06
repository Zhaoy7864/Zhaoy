
// Week1-ex-2View.cpp : CWeek1ex2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week1-ex-2.h"
#endif

#include "Week1-ex-2Doc.h"
#include "Week1-ex-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek1ex2View

IMPLEMENT_DYNCREATE(CWeek1ex2View, CView)

BEGIN_MESSAGE_MAP(CWeek1ex2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek1ex2View 构造/析构

CWeek1ex2View::CWeek1ex2View()
{
	// TODO: 在此处添加构造代码

}

CWeek1ex2View::~CWeek1ex2View()
{
}

BOOL CWeek1ex2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek1ex2View 绘制

void CWeek1ex2View::OnDraw(CDC* /*pDC*/)
{
	CWeek1ex2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek1ex2View 诊断

#ifdef _DEBUG
void CWeek1ex2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek1ex2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek1ex2Doc* CWeek1ex2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek1ex2Doc)));
	return (CWeek1ex2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek1ex2View 消息处理程序


void CWeek1ex2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CWeek1ex2Doc* pDoc = GetDocument();
	CView::OnLButtonDown(nFlags, point);
	if (nFlags)
	{
		pDoc->count++;
	}
}


void CWeek1ex2View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnRButtonDown(nFlags, point);
	CWeek1ex2Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	s.Format(_T("点击次数:%d"), pDoc->count);
	dc.TextOutW(200, 300, s);


}
