#pragma once
#include <core/utility/strings.h>

namespace controls
{
	class ViewHeader : public CEdit
	{
	public:
		virtual ~ViewHeader() = default;

		void SetLabel(const UINT uidLabel) { m_szLabel = strings::loadstring(uidLabel); }
		void SetLabel(const std::wstring szLabel) { m_szLabel = szLabel; }

		void Initialize(_In_ CWnd* pParent, _In_opt_ HDC hdc, _In_ bool bCollapsible, _In_ UINT nidParent);
		void DeferWindowPos(_In_ HDWP hWinPosInfo, _In_ int x, _In_ int y, _In_ int width);

		int GetMinWidth() { return (m_bCollapsible ? m_iButtonHeight : 0) + m_iLabelWidth; }
		bool HandleChange(UINT nID);
		void OnToggleCollapse();

		void SetMargins(
			int iLabelHeight, // Height of the label
			int iButtonHeight); // Height of buttons below the control
		// Returns the height of our label, accounting for an expand/collapse button
		// Will return 0 if we have no label or button
		int GetFixedHeight() const noexcept
		{
			if (m_bCollapsible || !m_szLabel.empty()) return max(m_iButtonHeight, m_iLabelHeight);

			return 0;
		}

	protected:
		bool m_bInitialized{};
		std::wstring m_szLabel; // Text to push into UI in Initialize
		int m_iLabelWidth{}; // The width of the label
		UINT m_nIDCollapse{}; // NID for collapse button.
		HWND m_hWndParent{};
		bool m_bCollapsible{};
		bool m_bCollapsed{};
		CButton m_CollapseButton;

		// Margins
		int m_iLabelHeight{}; // Height of the label
		int m_iButtonHeight{}; // Height of buttons below the control
	};
} // namespace controls